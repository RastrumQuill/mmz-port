// sub_08077BB4 at 0x08077BB4 (thumb)

undefined4 sub_08077BB4(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 1:
    iVar3 = sub_08077D10(param_1);
    *(char *)(param_1 + 0xb6) = (char)iVar3;
    if ((int)((iVar3 + 0x40U) * 0x1000000) < 0) {
      if ((iVar3 + 0x40U & 0xff) < 0x81) {
        cVar1 = '\t';
      }
      else {
        cVar1 = '\x03';
      }
    }
    else {
      cVar1 = '\x02';
    }
    break;
  case 2:
  case 3:
    cVar1 = '\t';
    break;
  case 4:
    uVar2 = *(byte *)(param_1 + 0xb6) + 0x40;
    if ((int)(uVar2 * 0x1000000) < 0) {
      if ((uVar2 & 0xff) < 0x81) {
        cVar1 = '\a';
      }
      else {
        cVar1 = '\x05';
      }
    }
    else {
      cVar1 = '\x06';
    }
    break;
  case 5:
  case 6:
    cVar1 = '\a';
    break;
  case 7:
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    cVar1 = '\b';
    break;
  case 8:
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    uVar4 = uVar2 & 0x7fffffff;
    DAT_0202e188 = uVar4;
    iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb8) + (iVar3 + -0x30) * 0x100;
    uVar2 = uVar4 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + (iVar3 + -0x30) * 0x100;
    cVar1 = '\0';
    break;
  case 9:
    cVar1 = '\x04';
    break;
  default:
    goto switchD_08077bce_caseD_a;
  }
  *(char *)(param_1 + 0xd) = cVar1;
switchD_08077bce_caseD_a:
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

