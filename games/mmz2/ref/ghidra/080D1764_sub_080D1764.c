// sub_080D1764 at 0x080D1764 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080D1764(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  if ((DAT_020011d0 & 0x7f) == 10) {
    uVar3 = (uint)_DAT_0202e020;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (0x5f < bVar1) {
      *(undefined *)(param_1 + 0x12) = 0;
    }
    uVar3 = (uint)*(byte *)(param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = sub_080EF1E8(uVar3 - (*(byte *)(param_1 + 0x11) - 0x60),0x60);
    if (iVar2 == 0) {
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + 0x1000;
      sub_080CDD64(param_1,&local_18,0);
    }
  }
  else {
    iVar2 = sub_080EF1E8(uVar3 + *(byte *)(param_1 + 0x11),0x60);
    if (iVar2 == 0) {
      local_10 = *(undefined4 *)(param_1 + 0x54);
      local_c = *(int *)(param_1 + 0x58) + -0x1000;
      sub_080CDD64(param_1,&local_10,1);
    }
  }
  return in_lr;
}

