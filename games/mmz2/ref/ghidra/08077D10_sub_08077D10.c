// sub_08077D10 at 0x08077D10 (thumb)

ulonglong sub_08077D10(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    if (3 < (uVar1 * 2 >> 0x11 & 0xf)) {
      piVar2 = (int *)(param_1 + 0xc0);
      goto LAB_08077d4a;
    }
  }
  piVar2 = &DAT_0202e130;
LAB_08077d4a:
  uVar3 = sub_08038E6C(*(int *)(*piVar2 + 0x54) - *(int *)(param_1 + 0x54),
                       (*(int *)(*piVar2 + 0x58) + -0x800) - *(int *)(param_1 + 0x58));
  return CONCAT44(in_lr,uVar3) & 0xffffffff000000ff;
}

