// sub_080BEF9C at 0x080BEF9C (thumb)

int sub_080BEF9C(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)((int)param_1 + 6) == '\0') {
    uVar2 = (param_2 & 0xff) * 0x20;
    uVar1 = (uint)*(ushort *)(param_1 + 1);
    if (uVar1 != uVar2 && (int)(uVar1 + (param_2 & 0xff) * -0x20) < 0 == SBORROW4(uVar1,uVar2)) {
      return (int)param_1 + uVar2 + *param_1;
    }
  }
  return 0;
}

