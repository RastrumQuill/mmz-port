// sub_08069104 at 0x08069104 (thumb)

undefined4 sub_08069104(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar3 = DAT_02030108 & 0x40;
    if ((DAT_02030108 & 0x40) == 0) {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0xc);
      if (bVar1 != 4) {
        if (1 < bVar1) {
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
          *(undefined *)(param_1 + 0xd) = 2;
          sub_080691E0(param_1);
          return in_lr;
        }
        goto LAB_080691b2;
      }
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
      uVar3 = 0;
    }
    *(byte *)(param_1 + 10) = bVar1 & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar3;
    *(uint *)(param_1 + 0x90) = uVar3;
    *(char *)(param_1 + 0x94) = (char)uVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    cVar2 = sub_08068F28(param_1);
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_08068FEC(param_1);
    cVar2 = sub_08068F78(param_1);
    if (cVar2 != '\0') {
      return in_lr;
    }
LAB_080691b2:
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083629fc + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362a0c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

