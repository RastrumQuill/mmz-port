// sub_0800FD20 at 0x0800FD20 (thumb)

undefined4 sub_0800FD20(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined uVar4;
  ushort uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    DAT_0202f4a8 = '\0';
    DAT_0202f4a9 = 0;
    DAT_0202f4aa._0_1_ = 0;
    DAT_02002402 = 0x1000;
    *(undefined2 *)(param_1 + 0x10) = 0;
    cVar1 = '\x02';
    break;
  case 1:
    sub_080093E8(0x24,3,0x26);
    DAT_0202f4aa._0_1_ = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
  case 2:
    if (DAT_0202f4a8 == '\x01') {
      uVar4 = 3;
      if (*(char *)(param_1 + 0xe) == '\x01') {
        uVar4 = 7;
      }
    }
    else if (DAT_0202f4a8 == '\x02') {
      uVar4 = 0xe;
      if (*(char *)(param_1 + 0xe) == '\x01') {
        uVar4 = 0x12;
      }
    }
    else {
      if (DAT_0202f4a8 != '\x03') {
        *(undefined *)(param_1 + 0xe) = 2;
        DAT_0202f4a9 = 0;
        return in_lr;
      }
      uVar4 = 0x19;
      if (*(char *)(param_1 + 0xe) == '\x01') {
        uVar4 = 0x1d;
      }
    }
    *(undefined *)(param_1 + 0xe) = uVar4;
    return in_lr;
  case 3:
  case 5:
  case 9:
  case 0xb:
  case 0xe:
  case 0x10:
  case 0x14:
  case 0x16:
  case 0x19:
  case 0x1b:
  case 0x1f:
  case 0x21:
    uVar5 = *(short *)(param_1 + 0x12) + 1;
    *(ushort *)(param_1 + 0x12) = uVar5;
    DAT_02002402 = uVar5 & 0x1f | 0x1000;
    if (uVar5 != 0x10) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 4:
  case 6:
  case 10:
  case 0xc:
  case 0xf:
  case 0x11:
  case 0x15:
  case 0x17:
  case 0x1a:
  case 0x1c:
  case 0x20:
  case 0x22:
    uVar5 = *(short *)(param_1 + 0x12) - 1;
    *(ushort *)(param_1 + 0x12) = uVar5;
    DAT_02002402 = uVar5 & 0x1f | 0x1000;
    if (uVar5 != 0) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 7:
    sub_080093E8(0x24,3,(*(ushort *)(param_1 + 0x10) >> 2) + 0x43);
    sVar2 = *(short *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0x10) = sVar2;
    if (sVar2 != 0x14) {
      DAT_020302fe = 0x8003;
      return in_lr;
    }
    DAT_0202f4aa._0_1_ = 1;
    DAT_020302fe = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 8:
    if (DAT_0202f4a8 == '\x01') {
      DAT_0202f4a9 = 0;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 0xd:
    iVar3 = *(ushort *)(param_1 + 0x10) - 1;
    *(short *)(param_1 + 0x10) = (short)iVar3;
    DAT_020302fe = 0x8003;
    sub_080093E8(0x24,3,((uint)(iVar3 * 0x10000) >> 0x12) + 0x43);
    if (*(short *)(param_1 + 0x10) != 0) {
      return in_lr;
    }
    DAT_020302fe = 0;
    goto LAB_08010118;
  case 0x12:
    sub_080093E8(0x24,3,(*(ushort *)(param_1 + 0x10) >> 2) + 0x48);
    sVar2 = *(short *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0x10) = sVar2;
    if (sVar2 != 0x10) {
      DAT_020302fe = 0x8003;
      return in_lr;
    }
    DAT_0202f4aa._0_1_ = 2;
    DAT_020302fe = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 0x13:
    if (DAT_0202f4a8 == '\x02') {
      DAT_0202f4a9 = 0;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 0x18:
    iVar3 = *(ushort *)(param_1 + 0x10) - 1;
    *(short *)(param_1 + 0x10) = (short)iVar3;
    DAT_020302fe = 0x8003;
    sub_080093E8(0x24,3,((uint)(iVar3 * 0x10000) >> 0x12) + 0x48);
    if (*(short *)(param_1 + 0x10) != 0) {
      return in_lr;
    }
    DAT_020302fe = 0;
    goto LAB_08010118;
  case 0x1d:
    DAT_0202f4aa._0_1_ = 3;
    uVar5 = *(short *)(param_1 + 0x10) + 1;
    *(ushort *)(param_1 + 0x10) = uVar5;
    DAT_02002402 = uVar5 & 0x1f | (0x10 - uVar5) * 0x100;
    if (uVar5 != 0x10) {
      return in_lr;
    }
    DAT_0202f4aa._0_1_ = 4;
    sub_080093E8(0x24,3,0x4c);
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    DAT_02002402 = 0x10;
    break;
  case 0x1e:
    iVar3 = sub_080047C0(0xc6);
    if (iVar3 == 0) {
      sub_0800471C(0xc6);
    }
    sub_080047D8(0xc6);
    if (DAT_0202f4a8 == '\x03') {
      DAT_0202f4a9 = 0;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 0x23:
    iVar3 = sub_080047C0(0xc6);
    if (iVar3 == 0) {
      sub_0800471C(0xc6);
    }
    sub_080047D8(0xc6);
    sub_080093E8(0x24,3,0x26);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x24:
    iVar3 = sub_080047C0(0xc6);
    if (iVar3 == 0) {
      sub_0800471C(0xc6);
    }
    sub_080047D8(0xc6);
    DAT_0202f4aa._0_1_ = 3;
    uVar5 = *(short *)(param_1 + 0x10) - 1;
    *(ushort *)(param_1 + 0x10) = uVar5;
    DAT_02002402 = uVar5 & 0x1f | (0x10 - uVar5) * 0x100;
    if (uVar5 != 0) {
      return in_lr;
    }
    sub_08004768(0xc6);
LAB_08010118:
    cVar1 = '\x01';
    break;
  default:
    goto switchD_0800fd34_caseD_25;
  }
  *(char *)(param_1 + 0xe) = cVar1;
switchD_0800fd34_caseD_25:
  return in_lr;
}

