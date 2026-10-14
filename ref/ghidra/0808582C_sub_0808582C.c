// sub_0808582C at 0x0808582C (thumb)

undefined8 sub_0808582C(undefined4 param_1,char param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x23;
    *(undefined4 *)(iVar1 + 0x14) = 0x8085979;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fc6;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023003;
    *(char *)(iVar1 + 0x10) = param_2 + '\x02';
    *(undefined *)(iVar1 + 0xb8) = param_3;
    *(undefined4 *)(iVar1 + 0xbc) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

