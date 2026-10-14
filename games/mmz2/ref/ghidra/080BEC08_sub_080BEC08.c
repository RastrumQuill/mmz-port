// sub_080BEC08 at 0x080BEC08 (thumb)

undefined4 sub_080BEC08(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x73) == '\x04') &&
     (iVar1 = *(byte *)(param_1 + 0x13) - 1, *(char *)(param_1 + 0x13) = (char)iVar1, iVar1 == 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0x13) = (&DAT_083485a9)[(uint)*(byte *)(param_1 + 0x10) * 3];
    sub_080BEC40(param_1);
  }
  return in_lr;
}

