// sub_08072F04 at 0x08072F04 (thumb)

void sub_08072F04(int param_1)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x1000) == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
    if (*(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) {
      uVar1 = 0xfffffe00;
    }
    else {
      uVar1 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = 0xffffff00;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined *)(param_1 + 0xe) = 1;
  return;
}

