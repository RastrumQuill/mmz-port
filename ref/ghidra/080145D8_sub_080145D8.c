// sub_080145D8 at 0x080145D8 (thumb)

undefined4 sub_080145D8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x144);
  uVar1 = uVar2 >> 0x10;
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      uVar1 = 0x40 - uVar1;
    }
    if ((uVar2 & 4) == 0) {
      DAT_03001ba2 = (char)(uVar1 >> 1);
      iVar3 = 0x20000;
    }
    else {
      DAT_03001ba2 = '@' - (char)(uVar1 >> 1);
      iVar3 = 0x10000;
    }
    DAT_03001ba0 = DAT_03001ba2;
    DAT_03001ba1 = DAT_03001ba2;
    *(uint *)(param_1 + 0x144) = uVar2 + iVar3;
    if (0x400005 < *(uint *)(param_1 + 0x144)) {
      *(uint *)(param_1 + 0x144) = 0;
    }
  }
  return in_lr;
}

