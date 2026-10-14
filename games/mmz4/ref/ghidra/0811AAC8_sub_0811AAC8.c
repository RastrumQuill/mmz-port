// sub_0811AAC8 at 0x0811AAC8 (thumb)

undefined4 sub_0811AAC8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    *(undefined *)(param_1 + 0xdd4 + uVar2) = 0xff;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 6);
  *(undefined *)(param_1 + 0xddc) = 0;
  *(undefined *)(param_1 + 0xddd) = 0;
  *(undefined *)(param_1 + 0xdda) = 0;
  iVar1 = DAT_0202eda8;
  uVar2 = 0;
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (((int)(uint)*(byte *)((uVar2 >> 1) + iVar1) >> ((uVar2 & 1) << 2) & 0xfU) != 0) {
      if (uVar4 == *(byte *)(param_1 + 0xddb) + uVar3) {
        *(char *)(param_1 + 0xdd4 + uVar3) = (char)uVar2;
        *(char *)(param_1 + 0xdda) = *(char *)(param_1 + 0xdda) + '\x01';
        if (uVar3 < 5) {
          uVar3 = uVar3 + 1 & 0xff;
        }
      }
      else if (uVar3 == 0) {
        *(undefined *)(param_1 + 0xddc) = 1;
      }
      else if (uVar3 == 5) {
        *(undefined *)(param_1 + 0xddd) = 1;
        return in_lr;
      }
      uVar4 = uVar4 + 1 & 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x33);
  return in_lr;
}

