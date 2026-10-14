// sub_080726DC at 0x080726DC (thumb)

undefined4 sub_080726DC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  switch(*(undefined *)(iVar2 + 0x70)) {
  case 0:
switchD_080726fe_caseD_0:
    sub_0800561C(param_1 + 0x74,&DAT_082b1388);
    break;
  default:
    sub_0800561C(param_1 + 0x74,&DAT_082b1484);
    break;
  case 2:
    switch(*(undefined *)(iVar2 + 0x71)) {
    case 0:
      goto switchD_080726fe_caseD_0;
    case 1:
      goto switchD_080726fe_caseD_5;
    case 2:
      goto switchD_080726fe_caseD_6;
    case 3:
switchD_0807278e_caseD_2:
      sub_0800561C(param_1 + 0x74,&DAT_082b13dc);
      break;
    case 4:
switchD_0807278e_caseD_1:
      sub_0800561C(param_1 + 0x74,&DAT_082b13f8);
      break;
    case 5:
switchD_0807278e_caseD_0:
      sub_0800561C(param_1 + 0x74,&DAT_082b1414);
    default:
      break;
    }
  case 3:
    sub_0800561C(param_1 + 0x74,&DAT_082b1430);
    break;
  case 4:
    switch(*(undefined *)(iVar2 + 0x71)) {
    case 0:
      goto switchD_0807278e_caseD_0;
    case 1:
      goto switchD_0807278e_caseD_1;
    case 2:
      goto switchD_0807278e_caseD_2;
    case 3:
      goto switchD_080726fe_caseD_6;
    case 4:
      goto switchD_080726fe_caseD_5;
    case 5:
      goto switchD_080726fe_caseD_0;
    default:
      break;
    }
  case 5:
switchD_080726fe_caseD_5:
    sub_0800561C(param_1 + 0x74,&DAT_082b13a4);
    break;
  case 6:
  case 7:
switchD_080726fe_caseD_6:
    sub_0800561C(param_1 + 0x74,&DAT_082b13c0);
    break;
  case 8:
    sub_0800561C(param_1 + 0x74,&DAT_082b144c);
    break;
  case 9:
  case 10:
    sub_0800561C(param_1 + 0x74,&DAT_082b1468);
  }
  if (1 < *(byte *)(iVar2 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

