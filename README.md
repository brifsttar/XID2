# XID2 Unreal Engine plugin

Unreal Engine plugin for [cedrus](https://cedrus.com/)' [XID2](https://cedrus.com/support/xid/), based on their [xid_device_library](https://github.com/cedrus-opensource/xid_device_library).

## Usage

The main entry point is `XID2DeviceScannerSubsystem`, which can be accessed from Blueprint.

From here, you should be able to access all XID2 methods and objects, using the same API as the [xid_device_library](https://github.com/cedrus-opensource/xid_device_library).

## Compatibility

* The plugin is Windows-only.
* It has been tested with Unreal Engine 5.5, but it could probably work with earlier version (and we'll probably support future versions).

## Disclaimer

* At the moment, the plugin hasn't been test with any actual device
* Most of the wrapping code has been written by a generative AI
