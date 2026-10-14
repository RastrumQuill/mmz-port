// sub_0806CF10 at 0x0806CF10 (thumb)

undefined4 sub_0806CF10(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined2 *)
       (&DAT_0202e020 +
       (*(byte *)(param_1 + 0x10) & 1) * 2 + (uint)(*(byte *)(param_1 + 0x10) >> 1) * 4) = 0xbe;
    }
    else {
      (&DAT_0202e020)[(*(byte *)(param_1 + 0x10) & 1) + (uint)(*(byte *)(param_1 + 0x10) >> 1) * 4]
           = 0xbe;
    }
  }
  sub_08065A04(param_1);
  return in_lr;
}

