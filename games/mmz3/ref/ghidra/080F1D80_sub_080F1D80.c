// sub_080F1D80 at 0x080F1D80 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080F1D80(int param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    sub_080EA2B0(0x67);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 1:
    if ((DAT_02030c1a == 3) && ((DAT_02002134 & 2) != 0)) {
      DAT_02030c18 = DAT_02030c18 | 4;
    }
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    sub_080EA244(0x68);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_080f1d94_caseD_2:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    sVar3 = sub_080F2DC4(param_1);
    if (sVar3 == 0) {
      return in_lr;
    }
    if (sVar3 < 1) {
      if (sVar3 == -1) {
        cVar2 = '\x05';
      }
      else {
        sub_0800471C(3);
        cVar2 = '\x03';
      }
    }
    else {
      if ((DAT_02030105 & 8) == 0) {
        sub_080EA2B0(0x28c);
      }
      else if ((DAT_02030106 & 1) == 0) {
        sub_080EA2B0(0x28d);
      }
      else {
        sub_080EA2B0(0x28e);
      }
LAB_080f219e:
      cVar2 = '\x01';
    }
    break;
  case 2:
    goto switchD_080f1d94_caseD_2;
  case 3:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 4:
    if (DAT_02030c1a != 0) {
      DAT_02030c18 = DAT_02030c18 | 2;
      return in_lr;
    }
    DAT_02030eac = 1;
    sub_080EDB10(param_1,0x400);
    return in_lr;
  case 5:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    sub_080EA2B0(0x69);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 6:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    sub_080EA244(0x6a);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_080f1d94_caseD_7:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    sVar3 = sub_080F2DC4(param_1);
    if (sVar3 == 0) {
      return in_lr;
    }
    if (0 < sVar3) {
      cVar2 = *(char *)(param_1 + 3) + '\x01';
      break;
    }
    if (sVar3 != -1) {
      sub_0800471C(3);
      cVar2 = '\x01';
      DAT_02030eac = 1;
      break;
    }
    goto LAB_080f219e;
  case 7:
    goto switchD_080f1d94_caseD_7;
  case 8:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    sub_080EA244(0x6b);
    DAT_02030eac = 0;
    sub_0800104C();
    cVar2 = *(char *)(param_1 + 3) + '\x01';
    break;
  case 9:
    if ((DAT_02002134 & 2) == 0) {
      cVar2 = sub_08001134();
      if (cVar2 == '\0') {
        return in_lr;
      }
      if (cVar2 == '\x02') {
        cVar2 = '\f';
      }
      else if (cVar2 == '\x04') {
        cVar2 = '\n';
      }
      else {
        if (cVar2 != '\x10') {
          return in_lr;
        }
        cVar2 = '\n';
      }
    }
    else {
      sub_0800471C(3);
      sub_08002498();
      cVar2 = '\x01';
      DAT_02030eac = 1;
    }
    break;
  case 10:
    sub_0800471C(4);
    sub_080EA2B0(0x6d);
    sub_08002498();
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0xb:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    goto LAB_080f219e;
  case 0xc:
    sub_080EA244(0x6c);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0xd:
    cVar2 = sub_08001134();
    cVar1 = sub_08000FB8();
    if (cVar1 == '\0') {
      sub_08002498();
      cVar2 = '\x0e';
    }
    else if (cVar2 == '\x04') {
      cVar2 = '\n';
    }
    else {
      if (cVar2 != '\x10') {
        return in_lr;
      }
      cVar2 = '\n';
    }
    break;
  case 0xe:
    sub_08001098();
    DAT_02030e94 = DAT_02002470;
    cVar2 = '\x0f';
    break;
  case 0xf:
    cVar2 = sub_08001154();
    if (cVar2 == '\0') {
      return in_lr;
    }
    if (cVar2 == '\x01') {
      if ((DAT_02002470 == 0) && (_DAT_02001754 == 0)) {
        return in_lr;
      }
      cVar2 = '\x10';
    }
    else if (cVar2 == '\x02') {
      cVar2 = '\n';
    }
    else {
      cVar2 = '\n';
    }
    break;
  case 0x10:
    cVar2 = sub_080011E4();
    if (cVar2 == '\0') {
      return in_lr;
    }
    if (cVar2 == '\x01') {
      cVar2 = '\x11';
    }
    else if (cVar2 == '\x02') {
      cVar2 = '\n';
    }
    else {
      cVar2 = '\x0f';
    }
    break;
  case 0x11:
    cVar2 = sub_08001238();
    if (cVar2 == '\0') {
      return in_lr;
    }
    if (cVar2 == '\x01') {
      cVar2 = '\x12';
    }
    else {
      cVar2 = '\n';
    }
    break;
  case 0x12:
    cVar2 = sub_0800128C();
    if (cVar2 == '\0') {
      return in_lr;
    }
    if (cVar2 == '\x01') {
      uVar4 = 0;
      if (DAT_02002470 != 0x32da) {
        uVar4 = (ushort)((ushort)(-DAT_02002470 >> 0x10) | (ushort)(DAT_02002470 >> 0x10)) >> 0xf;
      }
      *(ushort *)(param_1 + 4) = uVar4;
      DAT_02002470 = _DAT_02001754 & 0xffff | (_DAT_02001754 >> 0x10) << 9;
      sub_08008500();
      cVar2 = '\x13';
    }
    else {
      cVar2 = '\n';
    }
    break;
  case 0x13:
    cVar2 = sub_080012C0();
    if (cVar2 == '\0') {
      return in_lr;
    }
    if (cVar2 == '\x01') {
      cVar2 = '\x14';
    }
    else {
      cVar2 = '\x14';
    }
    break;
  case 0x14:
    uVar5 = 0;
    if (DAT_02002470 != 0x32da) {
      uVar5 = (-DAT_02002470 | DAT_02002470) >> 0x1f;
    }
    if ((int)*(short *)(param_1 + 4) == uVar5) {
      sub_080EA2B0(0x6f);
    }
    else {
      sub_080EA2B0(0x6e);
    }
    sub_0800471C(6);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x15:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    sub_08002498();
    goto LAB_080f219e;
  default:
    goto switchD_080f1d94_caseD_16;
  }
  *(char *)(param_1 + 3) = cVar2;
switchD_080f1d94_caseD_16:
  return in_lr;
}

