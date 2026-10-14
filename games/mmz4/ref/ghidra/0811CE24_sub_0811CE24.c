// sub_0811CE24 at 0x0811CE24 (thumb)

undefined4 sub_0811CE24(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    *(undefined *)(param_1 + 0xdd2 + uVar2) = 0xff;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 7);
  *(undefined *)(param_1 + 0xde3) = 0;
  *(undefined *)(param_1 + 0xde4) = 0;
  *(undefined *)(param_1 + 0xdcf) = 0;
  iVar1 = DAT_0202edac;
  uVar2 = 0;
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (((int)(*(byte *)((uVar2 >> 2) + iVar1) & 0xf) >> (uVar2 & 3) & 1U) != 0) {
      if (uVar4 == *(byte *)(param_1 + 0xde2) + uVar3) {
        *(char *)(param_1 + 0xdd2 + uVar3) = (char)uVar2;
        *(char *)(param_1 + 0xdcf) = *(char *)(param_1 + 0xdcf) + '\x01';
        if (uVar3 < 6) {
          uVar3 = uVar3 + 1 & 0xff;
        }
      }
      else if (uVar3 == 0) {
        *(undefined *)(param_1 + 0xde3) = 1;
      }
      else if (uVar3 == 6) {
        *(undefined *)(param_1 + 0xde4) = 1;
        return in_lr;
      }
      uVar4 = uVar4 + 1 & 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x1c);
  return in_lr;
}

