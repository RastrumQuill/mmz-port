// sub_080A2158 at 0x080A2158 (thumb)

undefined4 sub_080A2158(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  switch(*(undefined *)(param_1 + 0x10)) {
  case 0:
  case 1:
    bVar3 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
    sub_0801260C(param_1);
    *(undefined *)(param_1 + 0x24) = 0;
    if ((bVar3 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    cVar1 = (char)(bVar3 & 1);
    *(char *)(param_1 + 0x4c) = cVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar3 & 1) << 4);
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    }
    else {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    }
    sub_080127E4(param_1,0x3702);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083446c8,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    if ((bVar3 & 1) == 0) {
      *(undefined2 *)(param_1 + 0xb8) = 0x8000;
    }
    else {
      *(undefined2 *)(param_1 + 0xb8) = 0;
    }
    *(undefined2 *)(param_1 + 0xba) = 0x200;
    *(undefined2 *)(param_1 + 0xbc) = 0x8000;
    *(undefined2 *)(param_1 + 0xbe) = 0x40;
    iVar4 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)] * 0x34;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x3f;
    }
    *(int *)(param_1 + 0x60) = iVar4 >> 6;
    *(char *)(param_1 + 0xc0) = cVar1 * '\x02' + -1;
    goto switchD_080a2184_caseD_7;
  case 2:
    bVar3 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
    uVar6 = bVar3 & 1;
    sub_08012738(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x40;
    *(undefined2 *)(param_1 + 0x52) = 0x40;
    if ((bVar3 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    sub_080127E4(param_1,0x3800);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083446f8,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar5 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = (uVar5 * 0x40 >> 0x16) * (uVar6 * 2 + -1);
    *(undefined4 *)(param_1 + 0x60) = 0x200;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 0xbe) = 0x168;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    goto switchD_080a2184_caseD_7;
  case 3:
    bVar3 = bRam0000000a >> 4;
    uVar6 = bVar3 & 1;
    sub_08012738(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    if ((bVar3 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    sub_080127E4(param_1,0x3701);
    iVar4 = ((uint)*(byte *)(param_1 + 0x11) * 2 + -1) * 0xa0;
    break;
  case 4:
    bVar3 = bRam0000000a >> 4;
    uVar6 = bVar3 & 1;
    sub_08012738(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    if ((bVar3 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    sub_080127E4(param_1,0x3701);
    iVar4 = (uint)*(byte *)(param_1 + 0x11) * 0x200 + -0x100;
    break;
  case 5:
    bVar3 = bRam0000000a >> 4;
    uVar6 = bVar3 & 1;
    sub_08012738(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    if ((bVar3 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    sub_080127E4(param_1,0x3701);
    sub_08012CA4(param_1,7);
    iVar4 = ((uint)*(byte *)(param_1 + 0x11) * 2 + -1) * 0xa0;
    break;
  case 6:
    bVar3 = bRam0000000a >> 4;
    uVar6 = bVar3 & 1;
    sub_08012738(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    if ((bVar3 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    sub_080127E4(param_1,0x3701);
    sub_08012CA4(param_1,7);
    iVar4 = (uint)*(byte *)(param_1 + 0x11) * 0x200 + -0x100;
    break;
  default:
    goto switchD_080a2184_caseD_7;
  }
  *(int *)(param_1 + 0x5c) = iVar4;
  *(undefined *)(param_1 + 0x12) = 0;
switchD_080a2184_caseD_7:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080A252C(param_1);
  return in_lr;
}

