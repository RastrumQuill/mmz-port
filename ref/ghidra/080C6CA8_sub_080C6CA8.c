// sub_080C6CA8 at 0x080C6CA8 (thumb)

void sub_080C6CA8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(byte *)(param_2 + 2) != 0) {
    iVar1 = *(byte *)(param_2 + 2) - 1;
    *(char *)(param_2 + 2) = (char)iVar1;
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + iVar1 * 4 + 0x44);
  }
  return;
}

