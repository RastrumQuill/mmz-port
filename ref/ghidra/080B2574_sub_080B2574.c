// sub_080B2574 at 0x080B2574 (thumb)

undefined4 sub_080B2574(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 in_lr;
  
  iVar2 = (int)*(short *)(param_1 + 200);
  if (*(int *)(param_1 + 0x54) != iVar2) {
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        sub_0809C930(param_1,4);
      }
      else {
        sub_0809C930(param_1,0);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_080055FC(param_1 + 0x74,&DAT_082b6c5c,param_1 + 0x4c,0x60);
        *(int *)(param_1 + 0xb4) = param_1;
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
    }
    else {
      sub_0809C930(param_1,3);
    }
  }
  sub_0809C980(param_1);
  psVar4 = (short *)(param_1 + 200);
  *(int *)(param_1 + 0x54) = (int)*psVar4;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (int)*psVar4;
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
    sub_08001EAC(5);
    sub_0800561C(param_1 + 0x74,&DAT_082b6c78);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 1:
    cVar1 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    sub_0809C930(param_1,5);
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 2:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    sub_0809C930(param_1,0);
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0x12) = 0xc;
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *psVar4 = 0x100;
    uVar3 = 3;
    goto LAB_080b26ee;
  case 4:
    if (*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0xbc) + 0x1e000) {
      return in_lr;
    }
    *psVar4 = -(short)*(int *)(param_1 + 0x54);
    uVar3 = 4;
LAB_080b26ee:
    sub_0809C930(param_1,uVar3);
    sub_0809C980(param_1);
    break;
  case 5:
    if (*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xbc)) {
      *psVar4 = 0;
      *(undefined *)(param_1 + 0xd) = 0;
    }
  default:
    goto switchD_080b25f4_caseD_6;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080b25f4_caseD_6:
  return in_lr;
}

