// sub_08023628 at 0x08023628 (thumb)

undefined4 sub_08023628(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0801B828();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_08023684(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 2;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_08023984(param_1);
  }
  return in_lr;
}

