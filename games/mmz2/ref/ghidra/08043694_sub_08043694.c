// sub_08043694 at 0x08043694 (thumb)

undefined4 sub_08043694(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar3 = (*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa314);
    sub_080032EC(0x4d);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x71);
  sub_080128D4(param_1);
  if (((int)(char)*(byte *)(param_1 + 0x71) != (uint)bVar1) &&
     (cVar2 = *(char *)(param_1 + 0x12) + '\x01', *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\x01'
     )) {
    iVar4 = *(int *)(param_1 + 200);
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
    *(undefined4 *)(iVar4 + 0xc) = 3;
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar4 + 9)] + 0xc);
    local_1c = *(int *)(param_1 + 0x54) + (iVar3 * 0x1000000 >> 0xd);
    local_18 = *(int *)(param_1 + 0x58) + -0x1c00;
    sub_0809CAD0(param_1,&local_1c,0,0);
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  cVar2 = (char)iVar3;
  if (bVar1 == 1) {
    *(int *)(*(int *)(param_1 + 200) + 0x54) = *(int *)(param_1 + 0x54) + cVar2 * 0x600;
    *(int *)(*(int *)(param_1 + 200) + 0x58) = *(int *)(param_1 + 0x58) + -0xe00;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(int *)(*(int *)(param_1 + 200) + 0x54) = *(int *)(param_1 + 0x54) + cVar2 * -0x1800;
        *(int *)(*(int *)(param_1 + 200) + 0x58) = *(int *)(param_1 + 0x58) + -0x1800;
        return in_lr;
      }
    }
    else if (bVar1 == 2) {
      piVar5 = (int *)(param_1 + 200);
      *(int *)(*piVar5 + 0x54) = *(int *)(param_1 + 0x54) + cVar2 * 0xc00;
      *(int *)(*piVar5 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
      *(byte *)(*piVar5 + 0x49) = *(byte *)(*piVar5 + 0x49) & 0xf3 | 8;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

