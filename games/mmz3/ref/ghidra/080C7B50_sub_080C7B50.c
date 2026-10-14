// sub_080C7B50 at 0x080C7B50 (thumb)

undefined4 sub_080C7B50(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 3) < 2) {
    *(uint *)(iVar2 + 0x8c) = *(uint *)(iVar2 + 0x8c) & 0xfffffffe;
    *(uint *)(iVar2 + 0x90) = *(uint *)(iVar2 + 0x90) & 0xfffffffe;
    sub_08017B2C(iVar2);
    *(undefined *)(param_1 + 0x11) = 0;
  }
  else {
    *(uint *)(iVar2 + 0x8c) = *(uint *)(iVar2 + 0x8c) | 1;
    *(uint *)(iVar2 + 0x90) = *(uint *)(iVar2 + 0x90) | 1;
    sub_08017BF8(iVar2);
    *(undefined *)(param_1 + 0x11) = 1;
  }
  if (*(char *)(iVar2 + 0xc) == '\x04') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

