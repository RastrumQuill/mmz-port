// sub_080C3778 at 0x080C3778 (thumb)

undefined8 sub_080C3778(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C8A9C(param_1,(int)param_2,
                       *(undefined4 *)
                        (&DAT_082cc1dc +
                        ((byte)(&DAT_082b6ea6)
                               [(uint)*(byte *)((uint)*(byte *)(param_1 + 5) +
                                               *(int *)(param_1 + 0x10) + 0x180) * 0xc] & 0xffffff7f
                        ) * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

