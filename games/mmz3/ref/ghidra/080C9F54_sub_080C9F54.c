// sub_080C9F54 at 0x080C9F54 (thumb)

undefined4 sub_080C9F54(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_18;
  uint local_14;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  uVar6 = (uint)bVar1;
  if (uVar6 == 0) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    iVar3 = *(int *)(DAT_0202f5c0 + 0x54);
    iVar5 = *(int *)(param_1 + 0x54);
    sub_08017700(param_1,0x1001);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(byte *)(param_1 + 0x94) = bVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_18 = (uint)(0 < iVar3 - iVar5) * -0x100 + 0x80;
    local_14 = uVar6;
    sub_080B7EA0(param_1,param_1 + 0x54,&local_18,0,&DAT_0836c460,0x18);
    *(undefined *)(param_1 + 0x12) = 0x18;
    uVar4 = FUN_080fe2f8(local_18,3);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (uVar6 != 1) {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_080C9D78(param_1);
  }
  return in_lr;
}

