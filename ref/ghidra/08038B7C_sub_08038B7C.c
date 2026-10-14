// sub_08038B7C at 0x08038B7C (thumb)

undefined4 sub_08038B7C(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

