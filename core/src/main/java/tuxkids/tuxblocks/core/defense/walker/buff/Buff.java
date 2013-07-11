package tuxkids.tuxblocks.core.defense.walker.buff;

import tuxkids.tuxblocks.core.PlayNObject;
import tuxkids.tuxblocks.core.utils.HashCode;
import tuxkids.tuxblocks.core.utils.HashCode.Hashable;

public abstract class Buff extends PlayNObject implements Hashable {
	
	protected abstract int lifespan();
	public abstract float modifySpeed(float dt);
	
	protected int currentLife = lifespan();
	
	public boolean update(int delta) {
		currentLife -= delta;
		return currentLife <= 0;
	}

	@Override
	public void addFields(HashCode hashCode) {
		hashCode.addField(getClass());
	}
}