namespace Mapbox.Unity.Map
{
	using System;
	using Mapbox.Unity.Utilities;

	[Serializable]
	public class UnifiedMapOptions
	{
		public MapPresetType mapPreset = MapPresetType.LocationBasedMap;
		public MapOptions mapOptions = new MapOptions();
		[NodeEditorElement("Image ILayer")]
		public ImageryLayerProperties imageryLayerProperties = new ImageryLayerProperties();
		[NodeEditorElement("Terrain ILayer")]
		public ElevationLayerProperties elevationLayerProperties = new ElevationLayerProperties();
		[NodeEditorElement("Vector ILayer")]
		public VectorLayerProperties vectorLayerProperties = new VectorLayerProperties();
	}
}
