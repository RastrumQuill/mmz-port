// sub_080C8E00 at 0x080C8E00 (thumb)

undefined8 sub_080C8E00(int param_1,undefined4 param_2,undefined param_3)

{
  bool bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  int local_30 [4];
  undefined4 uStack_4;
  
  piVar6 = local_30;
  piVar5 = local_30;
  piVar8 = local_30;
  bVar1 = false;
  iVar7 = 2;
  local_30[3] = param_2;
  uStack_4 = in_lr;
  do {
    iVar3 = sub_0800710C(DAT_0203062c);
    *piVar6 = iVar3;
    if (iVar3 == 0) {
      bVar1 = true;
    }
    else {
      *(undefined *)(iVar3 + 0x25) = 1;
      *(undefined *)(iVar3 + 9) = 0x51;
      *(undefined4 *)(iVar3 + 0x14) = 0x80c8efd;
      *(undefined2 *)(iVar3 + 0x20) = 0;
      *(undefined *)(iVar3 + 0x22) = 0;
    }
    piVar6 = piVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  if (bVar1) {
    iVar7 = 2;
    do {
      iVar3 = *piVar5;
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
        *(undefined4 *)(iVar3 + 0xc) = 3;
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(iVar3 + 9)] + 0xc)
        ;
      }
      piVar5 = piVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    uVar4 = 0;
  }
  else {
    param_1 = param_1 + 0x800;
    iVar7 = 0;
    do {
      iVar3 = *piVar8;
      *(int *)(iVar3 + 0x54) = param_1;
      param_1 = param_1 + -0x800;
      *(int *)(iVar3 + 0x58) = local_30[3];
      uVar2 = sub_080FE4D8(param_3,10);
      *(undefined *)(iVar3 + 0x12) = uVar2;
      iVar3 = *piVar8;
      piVar8 = piVar8 + 1;
      *(char *)(iVar3 + 0x13) = (char)iVar7;
      param_3 = sub_080FE460(param_3,10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    uVar4 = 1;
  }
  return CONCAT44(uStack_4,uVar4);
}

