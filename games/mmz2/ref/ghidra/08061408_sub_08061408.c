// sub_08061408 at 0x08061408 (thumb)

undefined4 sub_08061408(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 1:
    sub_080032EC(0xda);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08011754(param_1);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080127E4(param_1,0xac00);
    iVar4 = sub_08012C64(param_1);
    sub_08002D68(0x33,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    break;
  case 3:
    goto switchD_0806141c_caseD_3;
  case 4:
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1;
    sub_080127E4(param_1,0xac10);
    DAT_0202e01d = 1;
    sub_08002EF0(0x33);
    sub_08002D68(0x37,0x40);
    iVar4 = sub_08012C64(param_1);
    sub_08002D68(0x34,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08002EA0(0x37);
    cVar3 = sub_08002EA0(0x34);
    if (cVar3 == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      sub_08002EF0(0x37);
      sub_08002EF0(0x34);
    }
    goto LAB_0806156a;
  case 6:
    sub_080032EC(0xfa);
    sub_080868C0(param_1);
    sub_080127E4(param_1,0xac11);
    *(undefined2 *)(param_1 + 0xbc) = 300;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080613CC(param_1);
    sub_080128D4(param_1);
    psVar5 = (short *)(param_1 + 0xbc);
    if (*psVar5 == 0) {
      bVar1 = (byte)DAT_0202ec42;
      if ((DAT_0202ec42 & 1) == 0) {
        *(undefined *)(param_1 + 0xd) = 9;
        *(byte *)(param_1 + 0xe) = bVar1 & 1;
      }
    }
    else {
      *psVar5 = *psVar5 + -1;
    }
    if (*psVar5 != 0x10e) {
      return in_lr;
    }
    sub_080032EC(0xdd);
    sub_080A6C0C(param_1,0);
    sub_080A6C0C(param_1,1);
    sub_08086864(param_1);
    return in_lr;
  default:
    goto switchD_0806141c_caseD_8;
  }
  sub_080032EC(0x101);
  *(undefined *)(param_1 + 0x13) = 0x20;
  sub_080B91EC(param_1,*(undefined *)(param_1 + 0x12));
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0806141c_caseD_3:
  cVar3 = sub_08002EA0(0x33);
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    cVar3 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\x04') {
      cVar3 = '\x02';
LAB_080614f6:
      *(char *)(param_1 + 0xe) = cVar3;
    }
  }
  else if ((*(char *)(param_1 + 0x12) == '\x04') && (cVar3 == '\x04')) {
    cVar3 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080614f6;
  }
LAB_0806156a:
  sub_080128D4(param_1);
switchD_0806141c_caseD_8:
  return in_lr;
}

