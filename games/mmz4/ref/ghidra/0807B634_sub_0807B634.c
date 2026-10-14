// sub_0807B634 at 0x0807B634 (thumb)

undefined4 sub_0807B634(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0807E7E0(param_1,1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

