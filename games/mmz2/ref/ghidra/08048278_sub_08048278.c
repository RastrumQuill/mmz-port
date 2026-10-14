// sub_08048278 at 0x08048278 (thumb)

undefined4 sub_08048278(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  *(undefined *)(param_1 + 0xbf) = 1;
  if (*(char *)(*(int *)(param_1 + 200) + 0xbf) != '\0') {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

