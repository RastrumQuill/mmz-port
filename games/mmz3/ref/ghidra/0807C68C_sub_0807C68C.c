// sub_0807C68C at 0x0807C68C (thumb)

undefined4 sub_0807C68C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x4100);
    *(undefined *)(param_1 + 0x12) = 0xc4;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar5 = *(int *)(param_1 + 0x68) +
          ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x68)) * 0x10 >> 8);
  *(int *)(param_1 + 0x68) = iVar5;
  iVar3 = *(int *)(param_1 + 0x5c) + 1;
  *(int *)(param_1 + 0x5c) = iVar3;
  *(int *)(param_1 + 0x58) =
       iVar5 + *(short *)((int)&DAT_080fe64c + ((uint)(iVar3 * 0x1000000) >> 0x17)) * 0x18;
  sub_0807C8F4(param_1);
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) != 0) goto LAB_0807c750;
    uVar4 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar4 == 0) {
LAB_0807c732:
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) goto LAB_0807c750;
    uVar4 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar4 == 0) goto LAB_0807c732;
    bVar1 = bVar1 | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
LAB_0807c750:
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54) + -0x1600;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + 0x1600;
    }
    local_10 = *(int *)(param_1 + 0x58) + -0x400;
    sub_080A22B8(param_1,&local_14,&local_14,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1);
    sub_0800471C(0);
    *(undefined *)(param_1 + 0x12) = 0xc4;
  }
  return in_lr;
}

