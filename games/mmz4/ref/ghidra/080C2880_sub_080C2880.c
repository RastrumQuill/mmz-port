// sub_080C2880 at 0x080C2880 (thumb)

undefined4 sub_080C2880(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_18 = *(undefined4 *)(DAT_0202dbf0 + 0x54);
    local_14 = *(undefined4 *)(iVar5 + 0xb4);
    uVar2 = sub_0810CD64(param_1 + 0x54,&local_18);
    iVar3 = (bVar1 >> 4 & 1) * 2;
    uVar2 = (uVar2 & 0xff) + iVar3 * (0x140 - (uVar2 & 0xff));
    uVar4 = uVar2 & 0xff;
    if (0x80 < uVar2 * 0x1000000 + 0xb0000000 >> 0x18) {
      uVar4 = 0x50;
    }
    uVar2 = (uVar4 + (0x140 - uVar4) * iVar3) * 0x1000000;
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + (uVar2 + 0x40000000 >> 0x17)) << 2;
    *(int *)(param_1 + 0x60) = (int)*(short *)((int)&DAT_08128c10 + (uVar2 >> 0x17)) << 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb6) == '\0') {
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) || (*(int *)(iVar5 + 0xb4) + -0xc00 <= iVar3)) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C2B48(param_1);
  }
  return in_lr;
}

