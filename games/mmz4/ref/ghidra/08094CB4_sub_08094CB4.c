// sub_08094CB4 at 0x08094CB4 (thumb)

undefined4 sub_08094CB4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_c;
  int local_8;
  undefined4 uStack_4;
  
  local_c = *(undefined4 *)(param_1 + 0x54);
  local_8 = *(int *)(param_1 + 0x58) + -0x800;
  uStack_4 = in_lr;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    sub_0802AB70(1,0xff,&local_c);
  }
  else {
    sub_0802AB70(1,0x30,&local_c);
  }
  return uStack_4;
}

