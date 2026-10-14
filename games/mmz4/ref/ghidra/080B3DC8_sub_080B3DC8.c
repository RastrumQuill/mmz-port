// sub_080B3DC8 at 0x080B3DC8 (thumb)

undefined4 sub_080B3DC8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = *(char *)(param_1 + 0xb8);
    if (cVar1 != '\0') {
      if (cVar1 == '\x03') {
        sub_080CEA90(param_1,0,0);
        sub_080CEA90(param_1,0,1);
      }
      else if (cVar1 == '\x01') {
        sub_080CEA90(param_1,0,0);
      }
      else {
        sub_080CEA90(param_1,0,1);
      }
    }
    if (*(char *)(param_1 + 0xbd) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08860340 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

