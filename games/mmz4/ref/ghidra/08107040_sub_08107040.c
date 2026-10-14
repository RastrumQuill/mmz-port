// sub_08107040 at 0x08107040 (thumb)

undefined4 sub_08107040(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = DAT_0202ea30 + -0x9800;
    DAT_0202e3c6 = 0x3b1;
    DAT_0202ddc6 = 9;
    sub_0801CF00(param_1,0xc305);
    *(undefined *)(param_1 + 0x25) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    iVar4 = *(int *)(param_1 + 0x54) + 0x180;
    *(int *)(param_1 + 0x54) = iVar4;
    if (iVar4 <= *(int *)(param_1 + 100) + -0x4000) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc304);
    break;
  case 2:
    sub_0801CFF0(param_1);
    iVar4 = *(int *)(param_1 + 0x54) + 0xe0;
    *(int *)(param_1 + 0x54) = iVar4;
    if (iVar4 <= *(int *)(param_1 + 100) + -0x1800) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc300);
    break;
  case 3:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc301);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 4:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    bVar2 = *(byte *)(param_1 + 10);
    uVar5 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar5 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 5:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc300);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 6:
    sub_0801CFF0(param_1);
    uVar5 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 2;
    goto LAB_081071f0;
  case 7:
    iVar4 = sub_081051A0(param_1,0xc300,1);
    uVar5 = iVar4 << 0x10;
LAB_081071f0:
    if (uVar5 == 0) {
      return in_lr;
    }
    break;
  default:
    goto switchD_08107054_caseD_8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_08107054_caseD_8:
  return in_lr;
}

