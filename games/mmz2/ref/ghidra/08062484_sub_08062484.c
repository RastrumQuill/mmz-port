// sub_08062484 at 0x08062484 (thumb)

undefined4 sub_08062484(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x25) = 0x19;
    uVar2 = sub_08087858(param_1,*(undefined *)(param_1 + 0x10),0);
    sub_080878C4(param_1,uVar2,*(undefined *)(param_1 + 0x10),0);
    sub_080BA2F0(param_1,*(undefined *)(param_1 + 0x10),0);
    uVar2 = sub_08087858(param_1,*(undefined *)(param_1 + 0x10),1);
    sub_080878C4(param_1,uVar2,*(undefined *)(param_1 + 0x10),1);
    sub_080BA2F0(param_1,*(undefined *)(param_1 + 0x10),1);
    *(undefined *)(param_1 + 0x4c) = *(undefined *)(param_1 + 0x10);
    *(byte *)(param_1 + 0x4a) =
         *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*(byte *)(param_1 + 0x10) & 1) << 4);
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080127E4(param_1,0x6b00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08062498_caseD_1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
LAB_0806257c:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08062498_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08062498_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 0x30) {
      return in_lr;
    }
    goto LAB_0806257c;
  case 4:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080128D4(param_1);
    bVar1 = (byte)DAT_0202ec42;
    if ((DAT_0202ec42 & 1) == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar1 & 1;
    }
  default:
    goto switchD_08062498_caseD_6;
  }
}

