// sub_080BEC40 at 0x080BEC40 (thumb)

undefined4 sub_080BEC40(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x73) == '\x04') &&
     (iVar2 = *(byte *)(param_1 + 0x13) - 1, *(char *)(param_1 + 0x13) = (char)iVar2, iVar2 == 0)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0x13) = (&DAT_083485aa)[(uint)*(byte *)(param_1 + 0x10) * 3];
    sub_080BEC9C(param_1);
  }
  else {
    if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return in_lr;
}

