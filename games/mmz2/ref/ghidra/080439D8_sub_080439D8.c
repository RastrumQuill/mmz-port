// sub_080439D8 at 0x080439D8 (thumb)

undefined4 sub_080439D8(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080127E4(param_1,0xa316);
    iVar5 = (int)(char)(bVar1 * '\x02' + -1);
    local_18 = *(int *)(param_1 + 0x54) + iVar5 * -0x1500;
    local_14 = *(int *)(param_1 + 0x58) + -0x1400;
    uVar4 = sub_080B4A68(param_1,&local_18,1,0);
    *(undefined4 *)(param_1 + 0xc4) = uVar4;
    local_18 = *(int *)(param_1 + 0x54) + iVar5 * 0x1600;
    local_14 = *(int *)(param_1 + 0x58) + -0x1400;
    uVar4 = sub_080B4A68(param_1,&local_18,1,1);
    *(undefined4 *)(param_1 + 200) = uVar4;
    sub_080032EC(0x53);
    sub_08006E08(param_1 + 0x74,&DAT_0833a600);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

