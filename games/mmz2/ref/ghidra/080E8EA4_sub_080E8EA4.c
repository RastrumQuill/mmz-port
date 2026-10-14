// sub_080E8EA4 at 0x080E8EA4 (thumb)

undefined8 sub_080E8EA4(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080EF11C(param_1,(int)param_2,
                       *(undefined4 *)
                        (&DAT_0835e638 +
                        ((byte)(&DAT_0834a1d6)
                               [(uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x20a +
                                               (uint)*(byte *)(param_1 + 5)) * 0xc] & 0xffffff7f) *
                        4));
  return CONCAT44(in_lr,(int)cVar1);
}

