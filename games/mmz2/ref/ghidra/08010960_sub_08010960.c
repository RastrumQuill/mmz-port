// sub_08010960 at 0x08010960 (thumb)

undefined4 sub_08010960(int param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  uVar3 = *(uint *)(param_1 + 0x5c) & 0xffff;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    (&DAT_02000f94)[uVar3 >> 4] = (&DAT_02000f94)[uVar3 >> 4] & 0xfffc | 2;
    DAT_0202e030 = 0;
    DAT_0202e02c._2_2_ = 0;
    DAT_02000fd0 = 0x3f4c;
    DAT_02000fd2 = 0x1010;
    *(undefined2 *)(param_1 + 0x10) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (DAT_0202e01c == '\0') {
      return in_lr;
    }
    if (DAT_0202e01c != '\x01') {
      *(undefined *)(param_1 + 0xe) = 5;
      return in_lr;
    }
    uVar2 = *(short *)(param_1 + 0x10) - 1;
    *(ushort *)(param_1 + 0x10) = uVar2;
    DAT_02000fd2 = uVar2 >> 2 & 0x1f | 0x1000;
    if (uVar2 != 0) {
      return in_lr;
    }
    DAT_02000f90 = DAT_02000f90 & ~(ushort)(uVar3 << 8);
    *(undefined2 *)(param_1 + 0x10) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 0xf) == 0) {
      sub_080032EC(0x35);
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      sub_080BCA6C((uVar3 * 2 >> 0x11 & 7) + 0xc,(uVar4 * 2 >> 0x11 & 3) + 10,0);
    }
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    *(undefined2 *)(param_1 + 0x10) = 0xb0;
    break;
  case 3:
    if ((*(ushort *)(param_1 + 0x10) & 3) == 0) {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      sub_080BCA6C((uVar3 * 2 >> 0x11 & 7) + 0xc,(uVar4 * 2 >> 0x11 & 3) + 10,0);
      if ((*(ushort *)(param_1 + 0x10) & 7) == 0) {
        sub_080032EC(0x35);
      }
    }
    else {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      sub_080BCA6C(uVar3 * 2 >> 0x11 & 0x3f,(uVar4 * 2 >> 0x11 & 0x1f) + 2,0);
    }
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    *(undefined2 *)(param_1 + 0x10) = 0x10;
    break;
  case 4:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) {
      return in_lr;
    }
    break;
  case 5:
    uVar4 = *(uint *)(param_1 + 100);
    (&DAT_02000f94)[uVar3 >> 4] = (ushort)uVar4 | 0x4046;
    sub_08002824(" !!!\"!#!$!%!&!\'!",(uVar4 & 0x1f00) * 8 + 0x800,0x800);
    sub_08002880(0,((&DAT_02000f94)[uVar3 >> 4] & 0x1f00) * 8,0x800);
    sub_080027AC(&DAT_087dcf9c,0x4000);
    sub_08002AEC(&DAT_087dcfa8,0);
    sub_080086AC(1,1,0x8e);
    sub_080086AC(2,1,0x6e);
    sub_080086AC(3,1,0x6f);
    sub_080086AC(4,1,0x90);
    sub_080086AC(1,2,0x8f);
    sub_080086AC(2,2,0x7e);
    sub_080086AC(3,2,0x7f);
    sub_080086AC(4,2,0x91);
    if (DAT_0202e01e != '\0') {
      DAT_0202e01e = '\x01';
      sub_0800860C(0x1e,0x1d,&DAT_08320e60);
    }
    DAT_02000fd0 = 0x3f4c;
    DAT_02000fd2 = 0x1000;
    DAT_0202e030 = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    if (DAT_0202e01d == '\x01') {
      DAT_02000f90 = (ushort)(uVar3 << 8) | DAT_02000f90;
      DAT_02000fd2 = 0x10;
      DAT_0202e02c._0_2_ = 0;
    }
    else {
      if (DAT_0202e01d == '\x02') {
        puVar5 = &DAT_0202e02c;
        if (0x3f < (short)DAT_0202e02c) {
          DAT_02000fd2 = 0x1000;
          return in_lr;
        }
        DAT_02000fd2 = 0x10;
        uVar2 = (short)DAT_0202e02c + 1;
      }
      else {
        if (DAT_0202e01d == '\x03') {
          DAT_02000f90 = (ushort)(uVar3 << 8) | DAT_02000f90;
          if ((short)DAT_0202e02c == 0) {
            DAT_02000fd2 = 0x10;
            return in_lr;
          }
          DAT_02000fd2 = 0x10;
          DAT_0202e02c._0_2_ = (short)DAT_0202e02c + -1;
          return in_lr;
        }
        puVar5 = (undefined4 *)&DAT_02000f90;
        uVar2 = DAT_02000f90 & ~(ushort)(uVar3 << 8);
      }
      *(ushort *)puVar5 = uVar2;
    }
  default:
    goto switchD_08010980_caseD_7;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08010980_caseD_7:
  return in_lr;
}

