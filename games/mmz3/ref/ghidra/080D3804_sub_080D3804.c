// sub_080D3804 at 0x080D3804 (thumb)

undefined4 sub_080D3804(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    iVar2 = sub_080BCE88(param_1 + 0x54,1,0);
    *(int *)(param_1 + 0x28) = iVar2;
    *(undefined *)(iVar2 + 0x7c) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x74) = 0x1f;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x75) = 0x1f;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x76) = 0x1f;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  uVar3 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  *(int *)(*(int *)(param_1 + 0x28) + 0x78) =
       *(short *)((int)&DAT_080fe64c + (uVar3 & 0xfe)) * 0x180;
  *(uint *)(*(int *)(param_1 + 0x28) + 0x78) =
       *(int *)(*(int *)(param_1 + 0x28) + 0x78) + (*(byte *)(param_1 + 0x12) & 1) * 0x1000;
  if (*(char *)(param_1 + 0x12) == -0x7f) {
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x77) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

