// sub_08015300 at 0x08015300 (thumb)

undefined8 sub_08015300(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    if (*(int *)(param_1 + 0x154) != 0) goto LAB_08015328;
    goto switchD_08015374_caseD_5;
  }
  if (*(short *)(DAT_0202300c + 10) == 0) {
LAB_08015328:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar1 = 1;
    goto LAB_080153f0;
  }
  iVar2 = *(int *)(param_1 + 0x154);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(iVar2 + 9)] + 0xc);
  }
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 1:
    sub_08001EAC(0x5e);
    uVar1 = 0;
    goto LAB_080153e2;
  case 2:
  case 6:
    if (*DAT_02022b20 == '\0') {
      uVar1 = 1;
      goto LAB_080153e2;
    }
    uVar1 = sub_08092974(4);
    break;
  case 3:
    uVar1 = sub_08092974(2);
    break;
  case 4:
    sub_08001EAC(0x2b);
    if (iVar3 != 0) {
      DAT_02023648 = iVar3;
    }
    uVar1 = 3;
LAB_080153e2:
    uVar1 = sub_08092974(uVar1);
    break;
  default:
    goto switchD_08015374_caseD_5;
  }
  *(undefined4 *)(param_1 + 0x154) = uVar1;
switchD_08015374_caseD_5:
  uVar1 = 0;
LAB_080153f0:
  return CONCAT44(in_lr,uVar1);
}

