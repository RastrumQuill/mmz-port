// sub_08073EEC at 0x08073EEC (thumb)

undefined8 sub_08073EEC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    cVar1 = '\0';
    for (iVar3 = *(int *)(param_1 + 0x28); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x28)) {
      *(undefined4 *)(iVar3 + 0xc) = 2;
      *(undefined4 *)(iVar3 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar3 + 9) * 4) + 8);
      *(undefined *)(iVar3 + 0xd) = 1;
      cVar1 = cVar1 + '\x01';
    }
    if (((byte)(*(char *)(param_1 + 0xd) - 1U) < 2) && (cVar1 != '\x02')) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 2;
      }
    }
    sub_08074340(param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

