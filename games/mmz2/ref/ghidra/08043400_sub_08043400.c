// sub_08043400 at 0x08043400 (thumb)

undefined4 sub_08043400(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = (int)(char)((*(byte *)(param_1 + 10) >> 4 & 1) * '\x02' + -1);
    local_18 = *(int *)(param_1 + 0x54) + iVar3 * -0x1500;
    local_14 = *(int *)(param_1 + 0x58) + -0x1400;
    uVar2 = sub_080B4A68(param_1,&local_18,0,0);
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    local_18 = *(int *)(param_1 + 0x54) + iVar3 * 0x1600;
    local_14 = *(int *)(param_1 + 0x58) + -0x1400;
    uVar2 = sub_080B4A68(param_1,&local_18,0,1);
    *(undefined4 *)(param_1 + 200) = uVar2;
    sub_080032EC(0x53);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

