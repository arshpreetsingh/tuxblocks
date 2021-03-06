package tuxkids.tuxblocks.core.defense.projectile;

import playn.core.util.Clock;
import pythagoras.f.Vector;
import tuxkids.tuxblocks.core.defense.Grid;
import tuxkids.tuxblocks.core.defense.tower.Tower;
import tuxkids.tuxblocks.core.defense.walker.Walker;

/**
 * A {@link Projectile} that connects two objects before damaging the target.
 */
public abstract class ConnectionProjectile extends Projectile {

	/** Returns the duration that the connection should last before damage is dealt */
	protected abstract int duration();
	
	protected Vector direction = new Vector();
	private int timer;
	
	protected Vector sourcePosition() {
		return source.projectileStart();
	}
	
	protected float progress() {
		return (float)timer / duration();
	}
	
	@Override
	public void place(Grid grid, Walker target, Tower source) {
		super.place(grid, target, source);
		layer.setOrigin(0, layer.height() / 2);
	}
	
	@Override
	public boolean doUpdate(int delta) {
		timer += delta;
		if (timer > duration()) {
			dealDamage();
			return true;
		}
		return false;
	}

	@Override
	public void paint(Clock clock) {
		// orient the ImageLayer so it connects sourcePosition() and target.position()
		layer.setTranslation(sourcePosition().x, sourcePosition().y);
		direction.set(target.position());
		direction.subtract(sourcePosition(), direction);
		layer.transform().setRotation(direction.angle());
		layer.transform().setScale(direction.length() / layer.image().width(), 1f);
	}

}
