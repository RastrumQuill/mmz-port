// sub_080A2A50 at 0x080A2A50 (thumb)

undefined4 sub_080A2A50(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0809C930(param_1,2);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar2 = (uint)*(byte *)(param_1 + 0x11) << 0x18;
    *(int *)(param_1 + 0x54) = ((int)uVar2 >> 0x19) + -0x180;
    *(undefined4 *)(param_1 + 0x58) = 0;
    uVar6 = 0;
    if (uVar2 >> 0x1c != 0) {
      do {
        sub_0809C980(param_1);
        uVar2 = uVar6 * 0x10000 + 0x10000;
        uVar6 = uVar2 >> 0x10;
      } while ((int)uVar2 >> 0x10 < (int)(uint)(*(byte *)(param_1 + 0x11) >> 4));
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      sub_0809C930(param_1,0);
      *(undefined *)(param_1 + 0x12) = 4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a2a64_caseD_2:
      sub_0809C980(param_1);
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0x44) = 1;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x12) = 0x10;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a2a64_caseD_3:
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 == '\0') {
          sub_0809C930(param_1,1);
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
          sub_080055FC(param_1 + 0x74,&DAT_082b5b4c,param_1 + 0x4c,0);
          *(int *)(param_1 + 0xb4) = param_1;
          *(undefined4 *)(param_1 + 0xb0) = 0;
          *(undefined *)(param_1 + 0x12) = 0;
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a2a64_caseD_4:
          sub_0809C980(param_1);
          puVar4 = (undefined4 *)(param_1 + 0x90);
          if ((*(ushort *)puVar4 & 1) != 0) {
            *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
          }
          if ((*(byte *)(param_1 + 0x12) < 3) &&
             ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0)) {
            if ((*(ushort *)puVar4 & 1) != 0) {
              sub_08001EAC(5);
            }
          }
          else {
            uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
            DAT_02022890 = uVar2 & 0x7fffffff;
            if ((uVar2 * 2 >> 0x11 & 1) == 0) {
              sub_08001EAC(0x4b);
            }
            else {
              sub_08001EAC(0x4a);
            }
            sub_0809C930(param_1,4);
            *puVar4 = 0;
            *(undefined *)(param_1 + 0x94) = 0;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
            *(undefined4 *)(param_1 + 0x54) = 0xffffff00;
            *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
            *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a2a64_caseD_5:
            sub_0809C980(param_1);
            iVar5 = *(int *)(param_1 + 0x58) + 0x40;
            *(int *)(param_1 + 0x58) = iVar5;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
            cVar1 = sub_080079CC();
            if (cVar1 != '\0') {
              uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
              *(undefined4 *)(param_1 + 0x50) = uVar3;
              *(undefined4 *)(param_1 + 0x54) = 0;
              *(undefined4 *)(param_1 + 0x58) = 0;
              *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
            }
          }
        }
      }
    }
    break;
  case 2:
    goto switchD_080a2a64_caseD_2;
  case 3:
    goto switchD_080a2a64_caseD_3;
  case 4:
    goto switchD_080a2a64_caseD_4;
  case 5:
    goto switchD_080a2a64_caseD_5;
  case 7:
    sub_0809C980(param_1);
  }
  return in_lr;
}

