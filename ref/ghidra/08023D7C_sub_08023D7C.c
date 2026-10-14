// sub_08023D7C at 0x08023D7C (thumb)

undefined4 sub_08023D7C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 6;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 5;
    sub_08027F54(param_1,0x21,0);
  }
  return in_lr;
}

