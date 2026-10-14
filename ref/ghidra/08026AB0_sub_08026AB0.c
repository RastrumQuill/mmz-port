// sub_08026AB0 at 0x08026AB0 (thumb)

undefined4 sub_08026AB0(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x115) != '\x1b') {
    *(undefined *)(param_1 + 0x10) = 4;
    *(undefined *)(param_1 + 0xd) = 0;
    uVar1 = *(undefined *)(param_1 + 0x71);
    sub_08025C94(param_1,0x700,1,1);
    sub_08027404(param_1,1,uVar1);
    sub_08026A08(param_1);
  }
  return in_lr;
}

