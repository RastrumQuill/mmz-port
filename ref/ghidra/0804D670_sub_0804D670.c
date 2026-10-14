// sub_0804D670 at 0x0804D670 (thumb)

undefined4 sub_0804D670(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_10 = *(int *)(param_1 + 0x50) + -0xc00;
    sub_0808827C(2,&local_14);
    sub_08001EAC(2);
    sub_08089E10(param_1,&local_14);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 8;
    sub_08015698(3,param_1 + 0x4c);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,param_1 + 0x4c);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

