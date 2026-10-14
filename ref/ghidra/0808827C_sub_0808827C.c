// sub_0808827C at 0x0808827C (thumb)

undefined8 sub_0808827C(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x8088451;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023010;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230c0;
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    sub_08088120(iVar1);
    sub_080033F0(iVar1 + 0x6c,(&DAT_082b3334)[param_1 & 0xff]);
  }
  return CONCAT44(in_lr,iVar1);
}

