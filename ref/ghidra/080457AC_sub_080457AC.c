// sub_080457AC at 0x080457AC (thumb)

undefined4 sub_080457AC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_080297C0();
  if (*(char *)(iVar2 + 0xc9) == '\x04') {
    cVar1 = (&DAT_083a8013)
            [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
             (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    if (iVar2 < *(int *)(param_1 + 0x50) + 0x800) {
      sub_0808827C(1,param_1 + 0x4c);
      sub_08001EAC(2);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}

