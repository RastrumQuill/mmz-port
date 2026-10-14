// sub_08056D40 at 0x08056D40 (thumb)

undefined4 sub_08056D40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(iVar2 + 9)] + 0xc);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    sub_080127E4(param_1,0xa610);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08056d56_caseD_1:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08056e4a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08056d56_caseD_5:
    return in_lr;
  case 1:
    goto switchD_08056d56_caseD_1;
  case 2:
    sub_080127E4(param_1,0xa611);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    local_14 = 0;
    local_10 = 0xfffff000;
    uVar1 = sub_080B878C(param_1,&local_14);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    goto LAB_08056e4a;
  case 4:
    iVar2 = *(int *)(param_1 + 0x28);
    sub_080128D4(param_1);
    if (1 < *(byte *)(iVar2 + 0xc)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      DAT_0202ec42 = DAT_0202ec42 | 2;
    }
  default:
    goto switchD_08056d56_caseD_5;
  }
}

