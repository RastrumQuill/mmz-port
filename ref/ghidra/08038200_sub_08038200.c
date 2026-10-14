// sub_08038200 at 0x08038200 (thumb)

undefined4 sub_08038200(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0xd) != '\x03') && (*(char *)(param_1 + 0xd) != '\0')) &&
     ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined2 *)(param_1 + 0xe) = 0;
    cVar1 = *(char *)(param_1 + 0xce) + '\x01';
    *(char *)(param_1 + 0xce) = cVar1;
    if (cVar1 == '\x04') {
      *(undefined *)(*(int *)(param_1 + 0xd4) + 0xd) = 2;
      *(int *)(param_1 + 0xd4) = 0;
    }
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ada0c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

