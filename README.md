# TouchPad Firmwares

Firmware packages for the TouchPad touch controller, loaded by [TouchPad-Editor](https://github.com/EveAeternam/TouchPad-Editor).

## Package format
A `.fw` file is a zip of the firmware split into pieces, so the editor can rebuild the sketch with a custom button layout:

| File | Contents |
|---|---|
| `version` | Firmware version (e.g. `1.0.0`) |
| `git` | Where the editor checks for updates |
| `instructions` | The order in which the pieces are assembled; lines starting with `$` are filled in by the editor (button array, loop function) |
| `comment`, `includes`, `header` | Sketch preamble |
| `func/*` | Functions (`setup`, `boot`, `bootins`) |
| `lib/*` | Libraries the sketch needs (Seeed touch and TFT drivers, RotoCop graphics) |

`latest` in each firmware folder names the newest version, which the editor compares against the loaded package.

## Firmwares
- **RotoCop** (`RotoCop/`): the RotoCop ground-station touchpad, 1.0.0. Readable source in `RotoCop/source/`; the same sketch as [RotoTouch-OS](https://github.com/EveAeternam/RotoTouch-OS).

Status: 2018 prototype. Not maintained.
